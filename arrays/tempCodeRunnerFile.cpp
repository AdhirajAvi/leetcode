vector<int> nums2 = nums;
    sort(nums2.begin(), nums2.end());
    for (auto it = nums2.begin(); it != nums2.end(); it++)
    {

        vector<int> temp = nums2; // fresh copy

        rotate(temp.begin(), it, temp.end());
        if(temp==nums){
            cout<<true<<endl;
            break;
        }
    }