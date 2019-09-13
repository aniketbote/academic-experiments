import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
import javax.swing.event.*;
 
class Calculator extends JFrame {
    private final Font BIGGER_FONT = new Font("monspaced",Font.PLAIN, 20);
    private JTextField textfield;
    private boolean number = true;
    private String equalOp = "=";
    private CalculatorOp op = new CalculatorOp();
    
    public Calculator() {
        textfield = new JTextField("", 12);
        textfield.setHorizontalAlignment(JTextField.RIGHT);
        textfield.setFont(BIGGER_FONT);
        ActionListener numberListener = new NumberListener();
        String buttonOrder = "1234567890. ";
        JPanel buttonPanel = new JPanel();
        buttonPanel.setLayout(new GridLayout(4, 4, 4, 4));
        for (int i = 0; i < buttonOrder.length(); i++) {
            String key = buttonOrder.substring(i, i+1);
            if (key.equals(" ")) {
                buttonPanel.add(new JLabel(""));
            } else {
                JButton button = new JButton(key);
                button.addActionListener(numberListener);
                button.setFont(BIGGER_FONT);
                buttonPanel.add(button);
            }
        }
        ActionListener operatorListener = new OperatorListener();
        JPanel panel = new JPanel();
        panel.setLayout(new GridLayout(4, 4, 4, 4));
        String[] opOrder = {"+", "-", "*", "/","=","C","sin","cos","logn","log10","sinh","cosh","tanh","sinInv","cosInv","tanInv","x^2","x^3","x^n","nPr","nCr","inv","Bin","Hex","Oct","Space"};
        for (int i = 0; i < opOrder.length; i++) {
            JButton button = new JButton(opOrder[i]);
            button.addActionListener(operatorListener);
            button.setFont(BIGGER_FONT);
            panel.add(button);
        }
        JPanel pan = new JPanel();
        pan.setLayout(new BorderLayout(4, 4));
        pan.add(textfield, BorderLayout.NORTH );
        pan.add(buttonPanel , BorderLayout.CENTER);
        pan.add(panel , BorderLayout.EAST);
        this.setContentPane(pan);
        this.pack();
        this.setTitle("Calculator");
        this.setResizable(true);
    }
    private void action() {
        number = true;
        textfield.setText("");
        equalOp = "=";
        op.setTotal("");
    }
    class OperatorListener implements ActionListener {
        public void actionPerformed(ActionEvent e) {
            String displayText = textfield.getText();
            if (e.getActionCommand().equals("sin"))
            {
                textfield.setText("" + Math.sin(Double.valueOf(displayText).doubleValue()));
                
            }else
            if (e.getActionCommand().equals("cos"))
            {
                textfield.setText("" + Math.cos(Double.valueOf(displayText).doubleValue()));
                
            }
else
            if (e.getActionCommand().equals("tan"))
            {
                textfield.setText("" + Math.tan(Double.valueOf(displayText).doubleValue()));
                
            }else
            if (e.getActionCommand().equals("cosh"))
            {
                textfield.setText("" + Math.cosh(Double.valueOf(displayText).doubleValue()));
                
            }else
            if (e.getActionCommand().equals("sinh"))
            {
                textfield.setText("" + Math.sinh(Double.valueOf(displayText).doubleValue()));
                
            }else
            if (e.getActionCommand().equals("tanh"))
            {
                textfield.setText("" + Math.tanh(Double.valueOf(displayText).doubleValue()));
                
            }
            else
            if (e.getActionCommand().equals("logn"))
            {
                textfield.setText("" + Math.log(Double.valueOf(displayText).doubleValue()));
                
            }
else
            if (e.getActionCommand().equals("log10"))
            {
                textfield.setText("" + Math.log10(Double.valueOf(displayText).doubleValue()));
                
            }
else
            if (e.getActionCommand().equals("tanInv"))
            {
                textfield.setText("" + Math.atan(Double.valueOf(displayText).doubleValue()));
                
            }
else
            if (e.getActionCommand().equals("sinInv"))
            {
                textfield.setText("" + Math.asin(Double.valueOf(displayText).doubleValue()));
                
            }
else
            if (e.getActionCommand().equals("cosInv"))
            {
                textfield.setText("" + Math.acos(Double.valueOf(displayText).doubleValue()));
                
            }
else
            if (e.getActionCommand().equals("x^2"))
            {
                textfield.setText("" + Math.pow(Double.valueOf(displayText).doubleValue(),2));
                
            }
else
            if (e.getActionCommand().equals("x^3"))
            {
                textfield.setText("" + Math.pow(Double.valueOf(displayText).doubleValue(),3));
                
            }
else
            if (e.getActionCommand().equals("inv"))
            {
                textfield.setText("" + Math.pow(Double.valueOf(displayText).doubleValue(),-1));
                
            }
else
            if (e.getActionCommand().equals("Bin"))
            {
                textfield.setText("" + Integer.toBinaryString(Integer.valueOf(displayText).intValue()));
                
            }
else
            if (e.getActionCommand().equals("Oct"))
            {
                textfield.setText("" + Integer.toOctalString(Integer.valueOf(displayText).intValue()));
                
            }
else
            if (e.getActionCommand().equals("Hex"))
            {
                textfield.setText("" + Integer.toHexString(Integer.valueOf(displayText).intValue()));
                
            }
  else if (e.getActionCommand().equals("Space"))
            {
                textfield.setText(" ");
            }
 
            else if (e.getActionCommand().equals("C"))
            {
                textfield.setText("");
            }
 
            else
            {
                if (number)
                {
                    
                    action();
                    textfield.setText("");
                    
                }
                else
                {
                    number = true;
                    if (equalOp.equals("="))
                    {
                        op.setTotal(displayText);
                    }else
                    if (equalOp.equals("+"))
                    {
                        op.add(displayText);
                    }
                    else if (equalOp.equals("-"))
                    {
                        op.subtract(displayText);
                    }
                    else if (equalOp.equals("*"))
                    {
                        op.multiply(displayText);
                    }
                    else if (equalOp.equals("/"))
                    {
                        op.divide(displayText);
                    }

                    textfield.setText("" + op.getTotalString());
                    equalOp = e.getActionCommand();
                }
            }
        }
    }
    class NumberListener implements ActionListener {
        public void actionPerformed(ActionEvent event) {
            String digit = event.getActionCommand();
            if (number) {
                textfield.setText(digit);
                number = false;
            } else {
                textfield.setText(textfield.getText() + digit);
            }
        }
    }
    public class CalculatorOp {
        private int total;
        public CalculatorOp() {
            total = 0;
        }
        public String getTotalString() {
            return ""+total;
        }
        public void setTotal(String n) {
            total = convertToNumber(n);
        }
        public void add(String n) {
            total += convertToNumber(n);
        }
        public void subtract(String n) {
            total -= convertToNumber(n);
        }
        public void multiply(String n) {
            total *= convertToNumber(n);
        }
        public void divide(String n) {
            total /= convertToNumber(n);
        }
        private int convertToNumber(String n) {
            return Integer.parseInt(n);
        }
    }
}
class SwingCalculator {
    public static void main(String[] args) {

        JFrame frame = new Calculator();
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setVisible(true);
    }
}