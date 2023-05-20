#include<iostream>
#include<sstream>
#include<vector>

using namespace std;

void readVector(istream& istr, vector<int>& output) {
	int buf;
	while (istr >> buf) {
		output.push_back(buf);
	}
}

void readVector(const string& buffer, vector <int>& output) {
	istringstream istr(buffer);
	readVector(istr, output);
}

void readPipe(istream & istr, vector <int> & pipe) {
	string trainStr;
	getline(istr, trainStr);
	readVector(trainStr, pipe);
}


int main() {

	vector <int> installation, checkup;

	size_t pipes;
	cin >> pipes;
	cin.ignore();

	installation.reserve(pipes);
	checkup.reserve(pipes);

	readPipe(cin, checkup);
	readPipe(cin, installation);

	for (size_t curPipe = 0; curPipe < pipes; curPipe++) {
		int decay = installation[curPipe] - checkup[curPipe];

		cout << installation[curPipe] / decay << ' ';
	}
	cout << endl;

return 0;
}
