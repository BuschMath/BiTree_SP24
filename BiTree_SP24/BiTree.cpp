#include "BiTree.h"

BiTree::BiTree()
{
	root = nullptr;
}

BiTree::~BiTree()
{
	MakeEmpty();
}

void BiTree::MakeEmpty()
{
}

bool BiTree::IsEmpty()
{
	return root == nullptr;
}

bool BiTree::IsFull()
{
	return false;
}

int BiTree::GetLength()
{
	return 0;
}

int BiTree::GetItem(int item)
{
	return 0;
}

void BiTree::PutItem(int item)
{
	bool found = false;
	FindLoc(root, item, found);
}

void BiTree::DeleteItem(int item)
{
}

void BiTree::PrintTree()
{
}

void BiTree::ResetTree()
{
}

int BiTree::GetNextItem()
{
	return 0;
}

void BiTree::FindLoc(TreeNode* tree, int item, bool& found)
{
	if (tree == nullptr)
	{
		TreeNode* temp = new TreeNode();
		temp->info = item;
		temp->left = nullptr;
		temp->right = nullptr;
		tree = temp;
	}
	else if (item < tree->info)
	{
		FindLoc(tree->left, item, found);
	}
	else if (item > tree->info)
	{
		FindLoc(tree->right, item, found);
	}
	else
	{
		found = true;
	}
}
