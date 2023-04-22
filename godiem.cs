using System;

class Program{
    static void Main(){
        bool cangodiem;
        while (true){
            Console.WriteLine("Enter value for cangodiem (0 or 1): ");
            string input = Console.ReadLine();
            if (input == "0"){
                cangodiem = false;
                break;
            }
            else if (input == "1"){
                cangodiem = true;
                break;
            }
            else Console.WriteLine("Invalid input. Please enter 0 or 1.");
        }

        if (cangodiem) Console.WriteLine("Ghi full tiêu đề + ghi nhớ 2 chương cuối");
        else Console.WriteLine("Ghi full tiêu đề 2 chương cuối");
    }
}
