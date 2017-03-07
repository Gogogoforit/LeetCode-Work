//https://leetcode.com/problems/island-perimeter/?tab=Description
//网吧时间可能不够，先写个思路：每一个island块所自带的边长属性，被上下左右四个块的情况所约束。
//因此最直接的思路，当然是对每个方块判断是否island，若是则判断是哪类，并把它的边长加到总的上面。
//为了避免显然两个for循环似乎不可避（求大大指点有办法降低复杂度），然后就总的减也可以的
