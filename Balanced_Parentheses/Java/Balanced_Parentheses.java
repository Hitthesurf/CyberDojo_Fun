
public class Balanced_Parentheses {

    public static boolean is_balanced(String equation)
    {
        char[] open_ele = {'{','[','('};
        char[] close_ele = {'}',']',')'};
        
        if (equation == "")
        {
            return true;   
        }
        
        for (int index = 0; index < equation.length(); index++)
        {
            char current_char = equation.charAt(index); 
            if (get_index(current_char, close_ele) >= 0)
            {
                //Has got close char before open therefore had to be false
                return false;
            }
            int index_ele = get_index(current_char, open_ele);
            if (index_ele >= 0)
            {
                //Look for corresponding close
                char open_char = open_ele[index_ele];
                char close_char = close_ele[index_ele];
                int off_set = -1;
                for (int close_index = index;
                     close_index < equation.length(); close_index++)
                {
                    current_char = equation.charAt(close_index);
                    if (current_char == open_char)
                    {
                        off_set += 1;   
                    }
                    if (current_char == close_char)
                    {
                        if (off_set == 0)
                        {
                            //Substring either side and pass through                                                      
                            boolean first_part = is_balanced(
                                equation.substring(index+1, close_index));
                            boolean second_part = is_balanced(
                                equation.substring(close_index+1, equation.length()));
                            return (first_part && second_part);
                            
                        }
                        off_set -= 1;
                    }
                    
                }
                    
                    
                    
                    
               //No corresponding close therefore false
               return false;
            }
        }
        //No close or open elements
        //Therefore has to be true
        return true;
    }
    
    public static int get_index(char letter, char[] Array)
    {

        for (int index = 0; index < Array.length; index++)
        {
            if (Array[index] == letter)
            {
             return index;                   
            }
        }
        return -1;
    }
}
