class Solution(object):
    def hasCycle(self, head):
        """
        :type head: ListNode
        :rtype: bool
        """
        if not head or not head.next:
            return False
        slow, fast = head, head
        
        while fast:
            slow = slow.next
            fast = fast.next
            if fast:
                fast = fast.next
            if slow == fast:
                return True
        return False
