// LeetCode 141: Linked List Cycle (Floyd's Tortoise and Hare)
#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

bool hasCycle(ListNode *head) {
    ListNode *slow = head, *fast = head;
    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast) return true;
    }
    return false;
}

int main() {
    ListNode a(1), b(2), c(3);
    a.next = &b; b.next = &c; c.next = &a; // cycle
    cout << boolalpha << hasCycle(&a) << endl; // true
}
