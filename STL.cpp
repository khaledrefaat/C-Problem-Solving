#include "bits/stdc++.h"

using namespace std;

// ////////////////////////////////////////////////////////////////////////////////
// // Medium Challenges

// ////////////////////////////////////////////////////////////////////////////////
// // Homework #1: Reverse Queue
//void reverseQueue(queue<int> &q) {
//    stack<int> reverse;
//
//    while (!q.empty()) {
//        reverse.push(q.front());
//        q.pop();
//    }
//
//    while (!reverse.empty()) {
//        q.push(reverse.top());
//        reverse.pop();
//    }
//}
//
//int main() {
//    queue<int> test;
//    test.push(1);
//    test.push(2);
//    test.push(3);
//    test.push(4);
//    test.push(5);
//    test.push(6);
//
//    reverseQueue(test);
//
//    while (!test.empty()) {
//        cout << test.front() << " ";
//        test.pop();
//    }
//}

// ////////////////////////////////////////////////////////////////////////////////
// // Homework #2: Stack based on a queue
// 1 2 3 4
// 1 2 3 4

//struct OurStackV1 {
//    queue<int> q;
//
//    void push(int val) {
//        q.push(val);
//    }
//
//    void pop() {
//        queue<int> tmp;
//        while (!q.empty()) {
//            if (q.size() > 1) tmp.push(q.front());
//            q.pop();
//        }
//        while (!tmp.empty()) {
//            q.push(tmp.front());
//            tmp.pop();
//        }
//    }
//
//    int top() {
//        return q.back();
//    }
//
//    bool empty() {
//        return q.empty();
//    }
//
//};
//
//// // Doctor Mostafa's solution
//struct OurStackV2 {
//    queue<int> q;
//
//    void push(int val) {
//        int size = q.size();
////        old size before pushing the new val
//        q.push(val);
//        while (size--) q.push(q.front()), q.pop();
//    }
//
//    void pop() {
//        if (!q.empty()) q.pop();
//    }
//
//    int top() {
//        return q.front();
//    }
//
//    bool empty() {
//        return q.empty();
//    }
//
//};
//
//int main() {
//    OurStackV2 s;
//    s.push(1);
//    s.push(2);
//    s.push(3);
//    s.push(4);
//    s.push(5);
//    s.push(6);
//
//    cout << s.top() << "\n";
//    s.pop();
//    cout << s.top() << "\n";
//
//}

// ////////////////////////////////////////////////////////////////////////////////
// // Homework #3: Reverse a number using stack

//void reverseNumV1(int num) {
//    stack<int> s;
//
//    while (num >= 0) {
//        int modResult = num % 10;
//        if (num >= 10) num /= 10;
//        else num = num - 10;
//
//        stack<int> tmp;
//        while (!s.empty()) tmp.push(s.top()), s.pop();
//        s.push(modResult);
//        while (!tmp.empty()) s.push(tmp.top()), tmp.pop();
//    }
//    while (!s.empty()) {
//        cout << s.top();
//        s.pop();
//    }
//}
//
//// // Doctor mostafa's solution
//int reverseNumV2(int num) {
//    if (num == 0) return num;
//
//    stack<int> s;
//    while (num) s.push(num % 10), num /= 10;
//
//    int tens = 1;
//    while (!s.empty()) num = s.top() * tens + num, tens *= 10, s.pop();
//    return num;
//};
//
//int main() {
//    cout << reverseNumV2(123456);
//}


// ////////////////////////////////////////////////////////////////////////////////
// // Homework #4: all words prefix (1)

// // My Solution it should be much simpler but the question required to use a map
//vector<string> findWords(const vector<string> &names, const string &prefix) {
//    vector<string> result;
//    for (const string &name: names) {
//        bool isValid = true;
//        for (int i = 0; i < prefix.size(); i++) {
//            if (prefix[i] != name[i]) {
//                isValid = false;
//                break;
//            }
//        }
//        if (isValid) result.push_back(name);
//    }
//    return result;
//}
//
//int main() {
//    int N, Q;
//    map<string, vector<string>> wordsPrefix;
//    vector<string> names;
//    cin >> N;
//
//    while (N--) {
//        string tmp;
//        cin >> tmp;
//        names.push_back(tmp);
//    }
//    cin >> Q;
//    while (Q--) {
//        string prefix;
//        cin >> prefix;
//        wordsPrefix[prefix] = findWords(names, prefix);
//    }
//
//    for (const auto &val: wordsPrefix) {
//        cout << val.first << " => ";
//        for (const auto &name: val.second) cout << name << " ";
//        cout << "\n";
//    }
//}

// // Doctor mostafa's solution
//int main() {
//    map<string, vector<string>> mp;
//    int n, q;
//    cin >> n;
//
//    while (n--) {
//        string name;
//        cin >> name;
//        string prefixes;
//        for (const char &c: name) prefixes += c, mp[prefixes].push_back(name);
//    }
//
//    cin >> q;
//    while (q--) {
//        string prefix;
//        cin >> prefix;
//
//        cout << prefix << " => ";
//    }
//}

// ////////////////////////////////////////////////////////////////////////////////
// // Homework #5: all words prefix (2)

//int main() {
//    map<string, set<string>> mp;
//    int n, q;
//    cin >> n;
//
//    while (n--) {
//        string name, prefixes;
//        cin >> name;
//        for (const char &c: name) prefixes += c, mp[prefixes].insert(name);
//    }
//
//    cin >> q;
//    while (q--) {
//        string prefix;
//        cin >> prefix;
//
//        cout << prefix << " => ";
//        for (const auto &name: mp[prefix]) cout << name << " ";
//        cout << "\n";
//    }
//}

// ////////////////////////////////////////////////////////////////////////////////
// // Homework #6: Remove all adjacent duplicates in string

string removeDuplicates(const string &str) {
    stack<char> s;

    for (const auto &c: str) {
        if (s.empty() || s.top() != c) s.push(c);
        else s.pop();
    }
    string result;
    while (!s.empty()) result.insert(0, 1, s.top()), s.pop();
    return result;
}

int main() {
    cout << removeDuplicates("abbaca");
}