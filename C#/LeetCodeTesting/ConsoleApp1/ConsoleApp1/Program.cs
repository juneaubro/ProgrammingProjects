using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;

namespace ConsoleApp1 // Note: actual namespace depends on the project name.
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int[] nums = { 1, 2, 3, 1 };
            Console.WriteLine(containsDicDup(nums));
        }

        public static bool containsDup(int[] nums)
        {
            HashSet<int>set = new HashSet<int>();
            foreach(int num in nums)
            {
                if (set.Contains(num))
                {
                    return true;
                }
                set.Add(num);
            }
            return false;
        }
        public static bool containsDicDup(int[] nums)
        {
            Dictionary<int,int> d = new Dictionary<int, int>();
            foreach(var i in nums)
            {
                if (d.ContainsKey(i))
                {
                    d[i]++;
                    if (d[i] > 1)
                    {
                        return true;
                    }
                }
                else
                {
                    d[i] = 1;
                }
            }
            return false;
        }
    }
}