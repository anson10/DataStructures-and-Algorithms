#include<iostream>
#include<algorithm>
#include<vector>

void reverseArray(std::vector<int>& arr, int m) {
    // Helper function for recursion
    static auto reverseSubArray = [](std::vector<int>& arr, int start, int end, auto& self) -> void {
        // Base case: stop recursion when start >= end
        if (start >= end) return;

        // Swap the elements at start and end
        std::swap(arr[start], arr[end]);

        // Recursive call with narrowed bounds
        self(arr, start + 1, end - 1, self);
    };

    // Call the recursive helper starting from index m + 1 to the end of the array
    reverseSubArray(arr, m + 1, arr.size() - 1, reverseSubArray);
}
int main(){
    // int start_element=0;
    int n;
    std::vector<int> test_arr;
    std::cout<<"Enter number of elements: ";
    std::cin>>n;

    for(int i=0; i<n; i++)
    {
        int value;
        std::cin>>value;
        test_arr.push_back(value);
    }
    reverseArray(test_arr,n);
    for(auto it: test_arr)
    {
        std::cout<<it<<" ";
    }

}