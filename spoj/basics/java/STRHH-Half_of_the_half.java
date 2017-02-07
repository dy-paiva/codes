import java.util.*;
import java.lang.*;

class Main {
  public static void main (String[] args) throws java.lang.Exception {
    Scanner scan = new Scanner(System.in);
    int t = Integer.parseInt(scan.nextLine()), str_size;

    String str, result;
    for (int i=0; i < t; ++i) {
      str = scan.nextLine();
      str_size = str.length() / 2;

      result = "";
      for (int j=0; j*2 < str_size; ++j) { result += str.charAt(j*2); }
      System.out.println(result);
    }
  }
}
