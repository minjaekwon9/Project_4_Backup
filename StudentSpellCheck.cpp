#include "StudentSpellCheck.h"
#include <string>
#include <vector>

SpellCheck* createSpellCheck()
{
	return new StudentSpellCheck;
}

StudentSpellCheck::~StudentSpellCheck() {
	// TODO
}

bool StudentSpellCheck::load(std::string dictionaryFile) {
	return true; // TODO
}

bool StudentSpellCheck::spellCheck(std::string word, int max_suggestions, std::vector<std::string>& suggestions) {
	return true; // TODO
}

void StudentSpellCheck::spellCheckLine(const std::string& line, std::vector<SpellCheck::Position>& problems) {
	// TODO
}