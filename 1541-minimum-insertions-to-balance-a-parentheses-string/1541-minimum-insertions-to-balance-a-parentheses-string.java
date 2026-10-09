class Solution {
 public int minInsertions(String s) {
        int ret = 0;
        Deque<Character> stack = new ArrayDeque<>();
        int closeCount=0;

        for (char c : s.toCharArray()) {
            if (c == '(') {
                if(closeCount==1){
                    if(!stack.isEmpty()) {
                        stack.pop();
                        ret++;
                    }
                    else {
                        ret+=2;
                    }
                    closeCount=0;
                }
                stack.push('(');
            }
            else {
                closeCount++;
                if (closeCount == 2 && !stack.isEmpty()) {
                    stack.pop();
                    closeCount=0;

                }
                else if(closeCount == 2){
                    ret++;
                    closeCount=0;

                }
            }
        }
        if (closeCount == 1) {
            if (!stack.isEmpty()) {
                ret++;
                stack.pop();
            } else {
                ret += 2;
            }
        }
        ret += stack.size() * 2;
        return ret;
    }
}