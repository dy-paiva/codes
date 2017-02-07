import java.util.*;
import java.lang.*;

class Main {
  public static boolean oddOrNot(int num) { return (num & 1) != 0; }

  public static void main (String[] args) throws java.lang.Exception {
    String result;
    Scanner scan = new Scanner(System.in);

    int t = Integer.parseInt(scan.nextLine()), l, c;
    for (int i = 0; i < t; ++i) {
      l = scan.nextInt();
      c = scan.nextInt();

      for (int j = 0; j < l; ++j) {
        result = "";
        for (int k = 0; k < c; ++k) {
          result += (k == 0 || k == c-1 || j == 0 || j == l-1) ? "*" : ".";
        }
        System.out.println(result);
      }
    }
  }
}
