# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
def valid(root,leftMax,rightMin):
    if not root:
        return True
    if root.val<leftMax and root.val>rightMin:
        #keeping trak of the min and max value in the tree at each right and left traversal
        return valid(root.left,root.val,rightMin) and valid(root.right,leftMax,root.val)
    return False
class Solution:
    
    def isValidBST(self, root: TreeNode) -> bool:
        if not root:
            return True
        #leftmax is the lower bound
        #rightmin is the upper bound
        leftMax = float('inf')
        rightMin = float('-inf')
        return valid(root,leftMax,rightMin)
        
        
        
            
        