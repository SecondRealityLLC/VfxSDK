#pragma once

class VFX
{

	private:

		// Frames
		float frameN;

		// Duration
		float timeN;

		// Name
		char* name;

	public:
	
		// Constructor & Destructor
		VFX();
		virtual ~VFX();

		// Vars
		void getName(char* name);
		void setName(char& name);

		void getFrame(int* n);
		void setFrame(int& n);

		void getTime(int* t);
		void setTime(int& t);

		// To implement
		virtual bool init(void);
		virtual bool shut(void);

		virtual void play(float t0, float t1);
		virtual void stop(void);

		virtual void pause(void);
		virtual void resume(void);

		virtual void update(void);
		virtual void render(float t);

};

