#ifndef NOTE_H_
#define NOTE_H_

#include <qstring.h>

class Note
{
public:
	int tone() const { return tone_;  }
	int octave() const { return octave_; }
	int accidentals() const { return accidentals_;  }

private:
	int tone_;
	int octave_;
	int accidentals_;
};
#endif  // NOTE_H_