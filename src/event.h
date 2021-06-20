#ifndef EVENT_H_
#define EVENT_H_

enum EventPollType {EV_QUICK = 0, EV_ACCURATE = 1};

typedef struct EventData{
	SDL_Event *e;
	const Uint8 *keyStates;
	const Uint32 *mouseState;
}EventData;

typedef void (*EV_Function)(EventData event);
typedef struct InputEvent{
	int pollType;
	Uint32 eventType;
	EV_Function function;
	bool isKeyPress;
	char keyCode;
	Uint8 scanCode;
}InputEvent;

void BindEvent(int pollType, Uint32 eventType, EV_Function function);
void BindQuickKeyEvent(EV_Function function, Uint8 scanCode);
void BindKeyEvent(EV_Function function, char key, Uint32 keyPressType);

extern SDL_Event e;
extern SDL_Point mouse_pos;
extern bool enable_input;
extern bool mouse_held;
extern bool mouse_clicked;

void InitEvents();
void FastEvents();
void EventListener();

#endif