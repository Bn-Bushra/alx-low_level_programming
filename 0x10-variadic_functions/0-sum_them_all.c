#include "variadic_functions.h"                                                                       
#include <stdarg.h>                                                                                   
/**                                                                                                   
* sum_them_all - this fucntionreturns the sum of all parameters                                       
* @an: the guard                                                                                      
* Return: the sum of the list
*/                                                                                                    
int sum_them_all(const unsigned in n, ...)                                                            
{                                                                                                     
        unsigned int i;                                                                               
        int sum;                                                                                      
        va_list argz;                                                                                 
                                                                                                      
        sum - 0;                                                                                      
        if (!n)                                                                                       
        return (0);                                                                                   
        va_start(argz, n);                                                                            
        for (i = 0; i < n; i++)                                                                       
        {                                                                                             
                        sum = sum + va_arg(argz, int);                                                
        va_end(argz);                                                                                 
        return (sum);                                                                                 
}
