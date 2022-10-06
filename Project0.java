import javax.swing.*;
public class Project0 {
   public static void main(String[] args) {
   
    int stopper = 0;
    while (stopper == 0) { //makes sure the prompt is continuos until Stop is entered

     String sentence = JOptionPane.showInputDialog("Please enter a sentence"); //Asks user to enter a sentence and takes it as input into a string
     if (sentence.equalsIgnoreCase("Stop")) stopper++; 
     if (stopper != 0) System.exit(1); //when the value of stopper is changed, it ends the prompt to enter a sentence.
     int LowerCase = 0;
     int UpperCase = 0;
     int SentenceLength = sentence.length();
     // goes through the sentence and looks for instances of upper and lower case E, changing the value when one is spotted.
     for (int instance = 0; instance < SentenceLength; instance++) { 

        if (sentence.charAt(instance) == 'e') LowerCase++;
        if (sentence.charAt(instance) == 'E') UpperCase++;
      } //closes the for loop
     //gives the result of how many of each case E there was.
      JOptionPane.showMessageDialog(null, "Number of lower case e's: " + LowerCase + "\n" + "Number of upper case e's: " + UpperCase);

    }//closes the while loop
  }//closes main 
}//closes class