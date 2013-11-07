/* input and output variables */
extern float* in1, in2, out, ...;
extern size_t inlen1, inlen2, outlen, ...;

int rat_init()
{
    /* some initialization */
    task* t;
    t = ...;                    /* new task */
    runtime_add_task(t);        /* load task to scheduler */
    t = ...;                    /* another task */
    runtime_add_task(t);        /* load task to scheduler */
    ...;                        /* continue loading tasks */
    /* translation of foreach instruction */
    for(i = 0; i < length(in1); ++i) {
        t = ...;
        runtime_add_task(t);
    }
}

int rat_run()                   /* called by external C routines */
{
    rat_init();
    runtime_schedule();         /* start scheduler */
    return 0;
}