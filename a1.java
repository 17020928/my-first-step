/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package hellojava;

import java.awt.Color;
import java.awt.Font;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.SwingConstants;

/**
 *
 * @author Than
 */
public class a1 extends JFrame{
    public a1(){
        this.setTitle("Hello Java");
        JLabel label = new JLabel("Hello Java!", SwingConstants.CENTER);
        label.setForeground(Color.green);
        label.setFont(new Font(Font.SERIF, Font.BOLD, 60));
        this.setSize(400, 400);
        this.setDefaultCloseOperation(EXIT_ON_CLOSE);
        this.setLocationRelativeTo(null);
        this.add(label);
    }
    
    public static void main(String[] args) {
        new a1().setVisible(true);
    }
    
}