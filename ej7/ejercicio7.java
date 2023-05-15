package com.mycompany;

public class ascii {
    public static void main(String args[]){
	char palabra;
    for(int x = 0; x <= 255; x++){
        palabra = (char) x;
        System.out.print(x + "-" + palabra + "\n");
    }
}
}
