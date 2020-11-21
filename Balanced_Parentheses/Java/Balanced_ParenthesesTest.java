// JUnit assertion - the default Java assertion library
// https://junit.org/junit5/

import org.junit.jupiter.api.*;
import static org.junit.jupiter.api.Assertions.*;

public class Balanced_ParenthesesTest {

    @Test
    void is_balanced_is_true_for_basic_equations() {
        boolean expected = true;
        
        boolean actual1 = Balanced_Parentheses.is_balanced("()");
        assertEquals(expected, actual1);
        
        boolean actual2 = Balanced_Parentheses.is_balanced("{}");
        assertEquals(expected, actual2);
        
        boolean actual3 = Balanced_Parentheses.is_balanced("[]");
        assertEquals(expected, actual3);
    }
    
    @Test
    void is_balanced_is_false_for_basic_equations() {
        boolean expected = false;
        
        boolean actual1 = Balanced_Parentheses.is_balanced(")(");
        assertEquals(expected, actual1);
        
        boolean actual2 = Balanced_Parentheses.is_balanced("}{");
        assertEquals(expected, actual2);
        
        boolean actual3 = Balanced_Parentheses.is_balanced("][");
        assertEquals(expected, actual3);
        
        boolean actual4 = Balanced_Parentheses.is_balanced("[");
        assertEquals(expected, actual4);
        
        boolean actual5 = Balanced_Parentheses.is_balanced("}[]");
        assertEquals(expected, actual5);
    }
    
    @Test
    void is_balanced_is_false_for_complex_equations()
    {
        boolean expected = false;        
        
        boolean actual1 = Balanced_Parentheses.is_balanced("({)}");       
        assertEquals(expected, actual1);
        
        boolean actual2 = Balanced_Parentheses.is_balanced("{{)(}}");       
        assertEquals(expected, actual2);
    }
    
    @Test
    void is_balanced_is_true_for_complex_equations()
    {
        boolean expected = true;        
        
        boolean actual1 = Balanced_Parentheses.is_balanced("[({})]");       
        assertEquals(expected, actual1);
        
        boolean actual2 = Balanced_Parentheses.is_balanced("{}([])");       
        assertEquals(expected, actual2);

        boolean actual3 = Balanced_Parentheses.is_balanced("{()}[[{}]]");       
        assertEquals(expected, actual3);        
        
    }
    
    @Test
    void is_balanced_is_false_for_sneaky_eqation()
    {
         boolean expected = false;     
         boolean actual = Balanced_Parentheses.is_balanced("}(}[])");
         assertEquals(expected, actual);   
    }
    
        @Test
    void is_balanced_is_true_for_no_close_and_open_elements_equation()
    {
         boolean expected = true;     
         boolean actual = Balanced_Parentheses.is_balanced("abcdefg");
         assertEquals(expected, actual);   
    }
    
    
    @Test
    void is_balanced_is_true_for_equations_with_letters()
    {
        boolean expected = true;
        boolean actual1 = Balanced_Parentheses.is_balanced("a{s(d)wscs}[d[s{}]wrr2]aaa");
        assertEquals(expected, actual1);
    }
    
    @Test
    void is_balanced_is_false_for_equations_with_letters()
    {
        boolean expected = false;
        boolean actual1 = Balanced_Parentheses.is_balanced("a{s(d)wscs}[]d[s{}]wrr2]aaa");
        assertEquals(expected, actual1);
    }
    
    @Test
    void is_in_returns_correct_values()
    {
        char[] My_Array = {'{','[','('};
        
        int expected1 = 0;
        int actual1 = Balanced_Parentheses.get_index('{', My_Array);
        assertEquals(expected1, actual1);    
        
        int expected2 = -1;
        int actual2 = Balanced_Parentheses.get_index('a', My_Array);
        assertEquals(expected2, actual2);           
    }
    
}
