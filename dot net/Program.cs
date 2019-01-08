// This is a comment in C#
using System;
namespace MyFirstProject
{
    class Program{
        static void Main(string[] args){
            Console.WriteLine("\t\t\tHey there this is my first program in C#.");
            Console.Write("Hello there...! What's your name? ");
            var name = Console.ReadLine();
            Console.Write("Hello " + name + " have a nice day...!");
            Console.ReadKey();
        }
    }
}