import java.util.Scanner;

public class Main{
    
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        String str = sc.nextLine();
        String array[]= str.split("\\.");
        
        int size = array[0].length();
        if(size<4){
            for (int i =0; i< 4 - size; i++){
                array[0] = "0" + array[0];
            }
        }
        if(array[1].length()==1){
            array[1] = "0" + array[1];
        }
        
        if(array[2].length()==1){
            array[2] = "0" + array[2];
        }
        
        System.out.println(array[0]+"."+array[1]+"."+array[2]);
        sc.close();
        return;
    }
    
}
