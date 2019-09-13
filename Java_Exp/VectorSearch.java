/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package unit2;

import java.util.Scanner;
import java.util.Vector;

/**
 *
 * @author DELL
 */
public class VectorSearch {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        Vector<String> v=new Vector<String>(20,10);
        String s=new String();
        System.out.println("ENTER NUMBER OF STRINGS : ");
        int n=sc.nextInt();
        for(int i=0;i<n;i++)
        {
            System.out.println("ENTER THE STRING TO BE INSERTED IN VECTOR 	     :");
            s=sc.next();
             v.addElement(s);
        }
        System.out.println("ENTER THE ELEMENT TO BE SEARCHED : ");
        String element=sc.next();
        int position=v.indexOf(element);
        if(position==-1)
        {
            System.out.println("ELEMENT NOT FOUND");
             v.addElement(element);
   	}
        System.out.println("ELEMENT IS PRESENT AT POSITION "+position);
        if(position!=-1)
        {
            v.removeElementAt(position);
            System.out.println("THE DELETED ELEMENT IS : "+element);
        }
        System.out.println("THE ELEMENTS OF VECTOR ARE :");
        for(int i=0;i<v.size();i++)
                System.out.println(v.elementAt(i));
     }
}
