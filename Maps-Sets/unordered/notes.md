simple unordered map usage in C++

```cpp
unordered_map<int, string> umap;
umap[1] = "One";
umap[2] = "Two";
umap[3] = "Three";

for (const auto& pair : umap) {
    cout << pair.first << ": " << pair.second << endl;
}
```

Some common operations:
```cpp
// Inserting elements
umap[4] = "Four";

// Accessing elements
cout << umap[2] << endl;

// Checking existence time complexity O(1)
if (umap.find(3) != umap.end()) {
    cout << "Key 3 exists." << endl;
}

umap.count(2); // Returns 1 if key exists, 0 otherwise time complexity O(1)

// Erasing elements
umap.erase(1);
// Iterating through elements
for (const auto& pair : umap) {
    cout << pair.first << ": " << pair.second << endl;
}
// Clearing the map
umap.clear();
// Checking size
cout << "Size of map: " << umap.size() << endl;
```
simple unordered set usage in C++

```cpp
unordered_set<string> uset;
uset.insert("One");
uset.insert("Two");
uset.insert("Three");

for (const auto& value : uset) {
    cout << value << endl;
}
```

Some common operations:
```cpp
// Inserting elements
uset.insert("Four");

// Accessing elements
if (uset.find("Two") != uset.end()) {
    cout << "Two exists in the set." << endl;
}

// Erasing elements
uset.erase("One");

// Iterating through elements
for (const auto& value : uset) {
    cout << value << endl;
}

// Clearing the set
uset.clear();

// Checking size
cout << "Size of set: " << uset.size() << endl;