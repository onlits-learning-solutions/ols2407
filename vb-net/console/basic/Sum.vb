Option Explicit On
Module Sum
    Sub Main()
        Dim a, b, c As Integer
        Console.Write("Enter a number: ")
        a = Console.ReadLine()
        Console.Write("Enter another number: ")
        b = Console.ReadLine()
        c = a + b
        Console.Write("The sum is " & c)
    End Sub
End Module