import java.util.*;
import java.lang.*;

class Main {
  public static boolean oddOrNot(int num) { return (num & 1) != 0; }

  public static void main (String[] args) throws java.lang.Exception {
    Scanner scan = new Scanner(System.in);
    String separator, str_line, str_colun = "..*";

    int t = Integer.parseInt(scan.nextLine()), l, c;
    for (int i = 0; i < t; ++i) {
      l = scan.nextInt();
      c = scan.nextInt();

      str_line  = "*";
      separator = "*";
      for (int j = 0; j < c; ++j) { separator += "***"; str_line += str_colun; }

      str_line += "\n" + str_line;
      for (int j = 0; j < l; ++j) { System.out.println(separator); System.out.println(str_line); }

      System.out.println(separator);
    }
  }
}
