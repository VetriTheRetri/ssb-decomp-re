#include "fighter.h"

// 0x80115B10
void ftExplain_ProcessInputSequence(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftComputerInput *cp_input = &fp->input.cp;
    ftExplainInput *explain = &fp->explain;

    if (explain->input_seq != NULL)
    {
        if (explain->input_wait != 0)
        {
            explain->input_wait--;
        }
        while (TRUE)
        {
            if ((explain->input_seq == NULL) || (explain->input_wait > 0))
            {
                break;
            }
            else explain->input_wait = explain->input_seq->command.param;

            switch (explain->input_seq->command.opcode)
            {
            case ftExplainCommand_Kind_End:
                explain->input_seq = NULL;
                break;

            case ftExplainCommand_Kind_Button:
                explain->input_seq++;

                fp->input.cp.button_inputs = ftExplainGetCpButtons(explain->input_seq);

                explain->input_seq++;
                break;

            case ftExplainCommand_Kind_Stick:
                explain->input_seq++;

                cp_input->stick_range.x = ftExplainGetCpStickRange(explain->input_seq)->x;
                cp_input->stick_range.y = ftExplainGetCpStickRange(explain->input_seq)->y;

                explain->input_seq++;
                break;
            }
        }
    }
}