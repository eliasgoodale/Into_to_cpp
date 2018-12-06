class Stream {
private:
	virtual void HandleBufferFull();
	std::vector<char> _buffer;
	int n;
	string s;

public:
	void PutInt(int n) {
		cout << n; 
	};

	void PutString(string s) {
		cout << string;
	};
};

class StreamDecorator : public Stream {
private:
	Stream *Dstream;
	void HandleBufferFull() {
		Dstream->HandleBufferFull();
	};

public:
	StreamDecorator(Stream *s) {
		_stream = s;
	};
};

class ASCII7Stream : public StreamDecorator {
private:
	std::vector
	void HandleBufferFull() {
		StreamDecorator::HandleBufferFull();

	};
	/*
	** Ascii7 interpretation of values
	*/
public:

}