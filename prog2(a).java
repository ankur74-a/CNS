import java.util.Scanner;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;

public class CaesarCipher {
    static Scanner sc = new Scanner(System.in);
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    public static void main(String[] args) throws IOException {
        System.out.println("Enter any String:");
        String str = br.readLine();
        System.out.println("Enter the key:");
        int key = sc.nextInt();
        
        String encryptedString = processString(str, key, true);
        System.out.println("\nEncrypted string is: " + encryptedString);
        
        String decryptedString = processString(encryptedString, key, false);
        System.out.println("\nDecrypted string is: " + decryptedString);
    }
    public static String processString(String str, int key, boolean encrypt) {
        StringBuilder result = new StringBuilder();
        int direction = encrypt ? 1 : -1;

        for (char ch : str.toCharArray()) {
            if (Character.isUpperCase(ch)) {
                ch = (char) ('A' + (ch - 'A' + direction * key + 26) % 26);
            } else if (Character.isLowerCase(ch)) {
                ch = (char) ('a' + (ch - 'a' + direction * key + 26) % 26);
            }
            result.append(ch);
        }
        return result.toString();
    }
}
