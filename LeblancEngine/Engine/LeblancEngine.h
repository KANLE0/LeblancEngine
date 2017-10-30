#ifndef LEBLANC_ENGINE_H
#define LEBLANC_ENGINE_H

class Engine
{
public:
	Engine();

	~Engine();

	void run();

private:
	void initialize();

	void prepare();

	void clear();

	void update(float delta_time);

	void render(float delta_time);

	void present();

private:
	Window m_window;
};

#endif