//https://leetcode.com/problems/island-perimeter/?tab=Description
//网吧时间可能不够，先写个思路：每一个island块所自带的边长属性，被上下左右四个块的情况所约束。
//因此最直接的思路，当然是对每个方块判断是否island，若是则判断是哪类，并把它的边长加到总的上面。
//先写一个判断边长属性函数，再对二维数组里的每一个遍历之。
