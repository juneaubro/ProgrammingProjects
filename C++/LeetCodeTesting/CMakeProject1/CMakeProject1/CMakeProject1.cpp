// CMakeProject1.cpp : Defines the entry point for the application.
//
#include "CMakeProject1.h"

void testCountCharacters();
void testMakeString();
void testContainsDup();
void testTwoSum();
void testValidParentheses();

int countCharacters(std::vector<std::string>&, std::string);
int makeString(std::string, std::string);
int rearrangeCharacters(std::string, std::string);
bool containsDup(std::vector<int>&);
std::vector<int> twoSum(std::vector<int>&, int);
bool isValid(std::string);

int main()
{
	testValidParentheses();
}

void testCountCharacters() {
	std::vector<std::string> words = { "cat","bt","hat","tree" };
	std::string chars = "atach";
	std::cout << countCharacters(words, chars);
}
void testMakeString() {
	std::string s = "ilovecodingonleetcode";
	std::string target = "code";
	std::cout << makeString(s, target);
	//std::cout << rearrangeCharacters(s, target);
}
void testContainsDup() {
	std::vector<int> nums = { 1,2,3,1 };
	std::cout << containsDup(nums);
}
void testTwoSum() {
	std::vector<int>nums = { 3,2,4 };
	int target = 6;
	std::vector<int> vec = twoSum(nums, target);
	for (auto a : vec) {
		std::cout << a << " ";
	}
}
void testValidParentheses() {
	std::string s = "{[]}";
	std::cout << isValid(s);
}

int countCharacters(std::vector<std::string>& words, std::string chars) {
	std::unordered_map<char, int>w, c;
	int sum = 0;
	for (char ch : chars) {
		c[ch]++;
	}
	for (std::string word : words) {
		w = c;
		int f = 1;
		for (char c : word) {
			if (w[c]) {
				w[c]--;
			} else {
				f = 0;
				break;
			}
		}
		if (f) {
			sum += word.size();
		}
	}
	return sum;
}
int makeString(std::string s, std::string target) { // my version
	std::unordered_map<char, int>c;
	int sum = 0;
	bool f = true;
	for (char ch : s) {
		c[ch]++;
	}
	while (f) {
		for (char ch : target) {
			if (c[ch]) {
				c[ch]--;
			} else {
				f = false;
			}
		}
		if (f) {
			sum++;
		}
	}
	return sum;
}
int rearrangeCharacters(std::string s, std::string target) { // some genious idea?
	std::unordered_map<char, int>mp, smp;
	int count = INT_MAX;
	int idx = 0;
	for (auto i : s) {
		mp[i]++;
	}
	for (int i = 0; i < target.size(); i++) {
		smp[target[i]]++;
		auto z = mp[target[i]];
		auto o = smp[target[i]];
		auto r = z / o;
		count = std::min(r, count);
	}
	return count;
} // gets the letter that appears the lowest with is c. 2 times. if none appear than 0, or if z=1 and o=2 its still 0
bool containsDup(std::vector<int>& nums) {
	std::unordered_map<int, int>n;
	for (auto i : nums) {
		n[i]++;
		if (n[i] > 1) {
			return true;
		}
	}
	return false;
}
std::vector<int> twoSum(std::vector<int>& nums, int target) {
	for (int i = 0; i < nums.size(); i++) {
		for (int j = 0; j < nums.size() - 1; j++) {
			if (i == j) {
				break;
			} else if (nums[i] + nums[j] == target) {
				return { j,i };
			}
		}
	}
	return { 0,0 };
}
bool isValid(std::string s) {
	
}
