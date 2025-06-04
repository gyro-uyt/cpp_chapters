import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class Second {
    public static void main(String[] args) {

        // Setting frame
        JFrame frame = new JFrame("IO");
        frame.setLocationRelativeTo(null);
        frame.setSize(400, 150);
        frame.setLayout(new GridLayout(3, 3));
        frame.setDefaultCloseOperation(WindowConstants.EXIT_ON_CLOSE);

        // Adding components
        JLabel label1 = new JLabel("Enter First Name:");
        JTextField field1 = new JTextField(10);
        JButton button1 = new JButton("Register");

        JLabel label2 = new JLabel("Enter Last Name:");
        JTextField field2 = new JTextField(10);
        JButton button2 = new JButton("Register");

        JButton button3 = new JButton("Combine Name:");
        JLabel label3 = new JLabel(" Combined name: ");

        // ✅ Mutable containers to store names (accessible in all listeners)
        final String[] firstName = {""};
        final String[] lastName = {""};

        // Add action to the buttons
        button1.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                firstName[0] = field1.getText();
            }
        });
        button2.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                lastName[0] = field2.getText();
            }
        });
        button3.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                String combinedName = firstName[0] +" "+ lastName[0];
                label3.setText(combinedName);
            }
        });

        // Add Everything to the frame
        frame.add(label1);
        frame.add(field1);
        frame.add(button1);

        frame.add(label2);
        frame.add(field2);
        frame.add(button2);

        frame.add(button3);
        frame.add(label3);

        frame.setVisible(true);
    }
}
