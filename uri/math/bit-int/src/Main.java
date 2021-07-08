import java.io.IOException;
import java.math.BigInteger;
import java.util.Scanner;



public class Main {

  static final BigInteger four = new BigInteger("4");
  static final BigInteger hundred = new BigInteger("100");
  static final BigInteger fourHundred = new BigInteger("400");
  static final BigInteger fifteen = new BigInteger("15");
  static final BigInteger fiftyfive = new BigInteger("55");

  static public boolean bissexto(BigInteger num) {
    return (BigInteger.ZERO.compareTo(num.mod(Main.four)) == 0 &&
            BigInteger.ZERO.compareTo(num.mod(Main.hundred)) != 0) ||
            BigInteger.ZERO.compareTo(num.mod(Main.fourHundred)) == 0;
  }

  static public boolean huluculu(BigInteger num) {
    return BigInteger.ZERO.compareTo(num.mod(Main.fifteen)) == 0;
  }

  static public boolean bulukulu(BigInteger num) {
    return BigInteger.ZERO.compareTo(num.mod(Main.fiftyfive)) == 0 && bissexto(num);
  }

  public static void main(String[] args) throws IOException {
    Scanner tecl = new Scanner(System.in);
    boolean isBissexto, isHuluculu, isBulukulu, first = true;
    BigInteger bigNum;
    while (tecl.hasNextBigInteger()) {
      if(first)  {
        first = false;
      } else {
        System.out.println();
      }
      bigNum = tecl.nextBigInteger();
      isBissexto = Main.bissexto(bigNum);
      isHuluculu = Main.huluculu(bigNum);
      isBulukulu = Main.bulukulu(bigNum);
      if(!isBissexto && !isHuluculu && !isBulukulu) {
        System.out.println("This is an ordinary year.");
      } else {
        if(isBissexto) System.out.println("This is leap year.");
        if(isHuluculu) System.out.println("This is huluculu festival year.");
        if(isBulukulu) System.out.println("This is buluculu festival year.");
      }
    }
  }

}