struct Button_State {
	bool is_down;
	bool changed;
};

enum {
	BUTTON_UP,
	BUTTON_DOWN,
	BUTTON_W,
	BUTTON_S,

	BUTTON_COUNT //LAST ITEM
};

struct Input {
	Button_State buttons[BUTTON_COUNT];
};

/*
class BubbleMan {
	int pos_x, pos_y, height, widgth;
	public:

};
*/
