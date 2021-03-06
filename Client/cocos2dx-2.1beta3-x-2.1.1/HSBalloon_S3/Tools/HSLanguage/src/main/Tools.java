package main;


import java.io.DataOutputStream;
import java.io.IOException;

import jxl.Cell;
import jxl.Sheet;

public class Tools {
	public static void write(DataOutputStream dos,byte[] b){
		try {
			dos.writeShort(b.length);
			dos.write(b);
		} catch (IOException e) {
			e.printStackTrace();
		}
	}
	public static void write(DataOutputStream dos,byte[][] b){
		try {
			dos.writeShort(b.length);
			for(int i=0;i<b.length;i++){
				dos.writeByte(b[i].length);
				dos.write(b[i]);
			}
		} catch (IOException e) {
			e.printStackTrace();
		}
	}
	public static void write(DataOutputStream dos,byte[][][] b){
		try {
			dos.writeShort(b.length);
			for(int i=0;i<b.length;i++){
				dos.writeByte(b[i].length);
				for(int j=0;j<b[i].length;j++){
					dos.writeByte(b[i][j].length);
					dos.write(b[i][j]);
				} 
			}
		} catch (IOException e) {
			e.printStackTrace();
		}
	}
	
	public static void write(DataOutputStream dos,String[] s){
		try {
			dos.writeShort(s.length);
			for(int i=0;i<s.length;i++){
				dos.writeUTF(s[i]);
			}
		} catch (IOException e) {
			e.printStackTrace();
		}
	}
	
	public static void write(DataOutputStream dos,int[] s){
		try {
			dos.writeShort(s.length);
			for(int i=0;i<s.length;i++){
				dos.writeInt(s[i]);
			}
		} catch (IOException e) {
			e.printStackTrace();
		}
	}
	public static void write(DataOutputStream dos,short[] s){
		try {
			dos.writeShort(s.length);
			for(int i=0;i<s.length;i++){
				dos.writeShort(s[i]);
			}
		} catch (IOException e) {
			e.printStackTrace();
		}
	}
	public static void write(DataOutputStream dos,short[][] s){
		try {
			dos.writeShort(s.length);
			for(int i=0;i<s.length;i++){

				dos.writeByte(s[i].length);
				for(int j=0;j<s[i].length;j++){
					dos.writeShort(s[i][j]);
				}
			}
		} catch (IOException e) {
			e.printStackTrace();
		}
	}
	public static void write(DataOutputStream dos,int[][] s){
		try {
			dos.writeInt(s.length);
			for(int i=0;i<s.length;i++){

				dos.writeInt(s[i].length);
				for(int j=0;j<s[i].length;j++){
					dos.writeInt(s[i][j]);
				}
			}
		} catch (IOException e) {
			e.printStackTrace();
		}
	}
	public static void write(DataOutputStream dos,short[][][] s){
		try {
			dos.writeShort(s.length);
			for(int i=0;i<s.length;i++){
				dos.writeByte(s[i].length);
				for(int j=0;j<s[i].length;j++){
					dos.writeByte(s[i][j].length);
					for(int k=0;k<s[i][j].length;k++){
						dos.writeShort(s[i][j][k]);
					}
				}
			}
		} catch (IOException e) {
			e.printStackTrace();
		}
	}
	

	public static String[] excel_Colnum(int index_Col,Sheet s)
	{   
		int row=s.getRows();
		String[] str=new String[row];
		Cell[] c=new Cell[row];
		c=s.getColumn(index_Col);
		for(int i=0;i<row;i++)
		{

			str[i]=c[i].getContents();
		}


		return str;  

	}

	public static String[] excel_RowNumber_String(int index_Col,Sheet s)
	{   
		Cell[] cell=s.getRow(index_Col);

		String[] str= new String[cell.length];

		for(int i=0;i<cell.length;i++)
		{ 

			str[i]=cell[i].getContents();
		}


		return str;  

	}

	public static String[] excel_RowNumber_String(int index_Col,int index_o,int index_p,Sheet s)
	{   
		Cell[] cell=s.getRow(index_Col);

		String[] str= new String[index_p>cell.length?cell.length:index_p-index_o];

		for(int i=index_o;i<str.length;i++)
		{ 


			str[i]=cell[i].getContents();
		}


		return str;  

	}


	public static int[] excel_RowNumber_Int(int index_Col,int index_o,int index_p,Sheet s)
	{   


		Cell[] cell=s.getRow(index_Col);

		int[] str= new int[index_p-index_o>cell.length?cell.length:index_p-index_o];
        System.out.println("str="+str.length);
        
        System.out.println("cell="+cell.length);
		for(int i=index_o;i<index_p;i++)
		{ 

			if(cell[i].getContents()==null)
			{
				str[i]=-100;

				continue;

			}
			str[i-index_o]=Integer.parseInt(cell[i].getContents());
		}


		return str;  

	}
	public static int[] excel_RowNumber_Int(int index_Col,Sheet s)
	{   


		Cell[] cell=s.getRow(index_Col);

		int[] str= new int[cell.length];

		for(int i=0;i<cell.length;i++)
		{ 


			str[i]=Integer.parseInt(cell[i].getContents());
		}


		return str;  

	}
	
	public static short[] excel_RowNumber_Short(int index_Col,Sheet s)
	{   


		Cell[] cell=s.getRow(index_Col);

		short[] str= new short[cell.length];

		for(int i=0;i<cell.length;i++)
		{ 


			str[i]=Short.parseShort(cell[i].getContents());
			 
		}


		return str;  

	}

}
