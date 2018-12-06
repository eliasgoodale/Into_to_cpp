class Window {
private:
	int _height;
	int _width;
	VisualComponent *_default;
	void SetContents(VisualComponent *) {
		...
	}

public:
	Window(VisualComponent *, _height = 1080, _width = 1920);
};

class VisualComponent {
public:
	VisualComponent();
	virtual void Draw();
	virtual void Resize();
};

class VisualComposite : public VisualComponent {
private:
	std::vector <VisualComponent *> components;
public:
	void Draw() {
		for c in components:
			c->Draw();
	}
}

class Decorator : public VisualComponent {
private:
	VisualComponent * _component;

public:
	Decorator(VisualComponent *component) {
		_component = component;
	}

	void Draw() {
		_component->Draw();
	};

	void Resize() {
		_component->Resize();
	};
};

class BorderDecorator : public Decorator {
private:
	int _width;
	void DrawBorder(int `) {
		...
	};

public:
	BorderDecorator(VisualComponent *, int borderWidth);

	void Draw() {
		Decorator::Draw();
		DrawBorder(_width);
	};
};

class ScrollDecorator : public Decorator {
private:
	int _magnitude
	void DrawScroll(int `) {
		...
	};

public:
	ScrollDecorator(VisualComponent *, int scrollMagnitude);

	void Draw() {
		Decorator::Draw();
		DrawScroll(_magnitude);
	}

}