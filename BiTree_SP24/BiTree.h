#ifndef BITREE_H
#define BITREE_H

struct TreeNode
{
	int info;
	TreeNode* left;
	TreeNode* right;
};

class BiTree
{
public:
	BiTree();
	~BiTree();

	void MakeEmpty();
	bool IsEmpty();
	bool IsFull();
	int GetLength();
	int GetItem(int item);
	void PutItem(int item);
	void DeleteItem(int item);
	void PrintTree();
	void ResetTree();
	int GetNextItem();

private:
	TreeNode* root;

	void FindLoc(TreeNode* tree, int item, bool& found);
};

#endif // !BITREE_H

