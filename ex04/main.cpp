#include <iostream>
#include <fstream>
#include <string>

// This function replaces all occurrences of s1 with s2 in a single line
std::string replace(const std::string &line, const std::string &s1, const std::string &s2)
{
	if (s1.empty())
		return line;
	std::string result;
	std::size_t i = 0;
	std::size_t found;
	while ((found = line.find(s1, i)) != std::string::npos) {
        // Copy everything from i up to the found position into result
		result += line.substr(i, found - i);
        // Append s2 instead of s1
		result += s2;
		i = found + s1.length();        // Move i past the found s1
	}
	result += line.substr(i);    // Append whatever is left after the last occurrence
	return (result);
}

int main(int argc, char **argv)
{
	if (argc !=4)
	{
		std::cout << "Usage: " << argv[0] << " <filename> s1 s2\n";
		return (1);
	}
	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];

	std::ifstream infile(filename.c_str());
	if (!infile) {
		std::cerr << "Error: cannot open input file." << std::endl;
		return 1;
	}

	std::ofstream outfile((filename + ".replace").c_str());
	if (!outfile) {
		std::cerr << "Error: cannot create output file." << std::endl;
		infile.close();
		return 1;
	}

	std::string line;
	while (std::getline(infile, line)) {
		outfile << replace(line, s1, s2); // Write the modified line to output file
		if (!infile.eof()) // to avoid extra newline at end
			outfile << std::endl;
	}
	infile.close();
	outfile.close();
	return 0;
}