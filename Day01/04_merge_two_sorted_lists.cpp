// LeetCode 21: Merge Two Sorted Lists
#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
    ListNode dummy(0);
    ListNode* tail = &dummy;
    while (l1 && l2) {
        if (l1->val <= l2->val) { tail->next = l1; l1 = l1->next; }
        else { tail->next = l2; l2 = l2->next; }
        tail = tail->next;
    }
    tail->next = l1 ? l1 : l2;
    return dummy.next;
}

int main() {
    ListNode a(1), b(3); a.next = &b;
    ListNode c(2), d(4); c.next = &d;
    ListNode* merged = mergeTwoLists(&a, &c);
    while (merged) { cout << merged->val << " "; merged = merged->next; }
    cout << endl; // 1 2 3 4
}
