import java.util.*;

public class A_Verify_Password {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int test = sc.nextInt();
        for (int t = 0; t < test; t++) {
            String str = sc.next();
            boolean isValid = true;
            
            List<Character> digits = new ArrayList<>();
            List<Character> letters = new ArrayList<>();
            
            boolean letterStarted = false;
            
            for (int i = 0; i < str.length(); i++) {
                char c = str.charAt(i);
                if (c >= '0' && c <= '9') {
                    if (letterStarted) {
                        isValid = false;
                        break;
                    }
                    digits.add(c);
                } else if (c >= 'a' && c <= 'z') {
                    letters.add(c);
                    letterStarted = true;
                } else {
                    isValid = false; // invalid character found
                    break;
                }
            }
            
            if (isValid && !isSorted(digits)) {
                isValid = false;
            }
            
            if (isValid && !isSorted(letters)) {
                isValid = false;
            }
            
            System.out.println(isValid ? "YES" : "NO");
        }
    }
    
    private static boolean isSorted(List<Character> list) {
        for (int i = 1; i < list.size(); i++) {
            if (list.get(i) < list.get(i - 1)) {
                return false;
            }
        }
        return true;
    }
}
