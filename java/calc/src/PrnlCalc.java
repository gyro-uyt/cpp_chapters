import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

// main class, inside this would be the main function, name of this should match the file name
public class PrnlCalc {
    private JFrame frame;   // declared, but still null (uninitialized)
    private JTextField textField;
    private double firstNumber = 0;
    private String operator = "";
    private boolean startNewNumber;

    // making the constructor
    public PrnlCalc() {
        frame = new JFrame("Calc");    // now we actually create the object
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setSize(300, 400);
        frame.setLayout(new BorderLayout());

        textField = new JTextField();
        textField.setEditable(false);
        textField.setFont(new Font("Arial", Font.BOLD, 24));
        frame.add(textField, BorderLayout.NORTH);

        JPanel panel = new JPanel(new GridLayout(4, 4, 5, 5));

        String[] buttons = {
                "7", "8", "9", "/",
                "4", "5", "6", "*",
                "1", "2", "3", "-",
                "C", "0", "=", "+"
        };

        for (String text : buttons) {
            JButton button = new JButton(text);
            button.setFont(new Font("Arial", Font.BOLD, 18));
            button.addActionListener(new ButtonListener());
            panel.add(button);
        }

        frame.add(panel, BorderLayout.CENTER);
        frame.setVisible(true);
    }

    // inner class
    private class ButtonListener implements ActionListener {
        @Override
        public void actionPerformed(ActionEvent e) {
            String command = e.getActionCommand();

            if ("0123456789".contains(command)) {
                if (startNewNumber) {
                    textField.setText(command);
                    startNewNumber = false;
                } else {
                    textField.setText(textField.getText() + command);
                }
            } else if ("+-*/".contains(command)) {
                firstNumber = Double.parseDouble(textField.getText());
                operator = command;
                startNewNumber = true;
            } else if (command.equals("=")) {
                double secondNumber = Double.parseDouble(textField.getText());
                double result = switch (operator) {
                    case "+" -> firstNumber + secondNumber;
                    case "-" -> firstNumber - secondNumber;
                    case "*" -> firstNumber * secondNumber;
                    case "/" -> secondNumber != 0 ? firstNumber / secondNumber : 0;
                    default -> 0;
                };
                textField.setText(String.valueOf(result));
                startNewNumber=true;
            } else if (command.equals("C")) {
                textField.setText("");
                startNewNumber=true;
                firstNumber=0;
                operator="";
            }
        }
    }

    // main function (must be inside a class), it is static so that it can be called without object
    public static void main(String[] args) {
        System.out.println("Hello");
        // this line creates an object of class Calculator and calls the constructor
        // Equivalent to: new Calculator();
        SwingUtilities.invokeLater(PrnlCalc::new);
    }
}