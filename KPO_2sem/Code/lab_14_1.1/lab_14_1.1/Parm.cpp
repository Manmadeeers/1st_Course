#include "stdafx.h"

namespace PARM {

	PARM getparm(int argc, _TCHAR* argv[])//argc - the amount of elements in argv array of nullterminal strings
	{
		PARM parm_to_return;

		//raising flags
		bool hasIn = false;
		bool hasOut = false;
		bool hasLog = false;
		wstring store_in;
		wstring store_log;
		for (int i = 0; i < argc; i++) {//loop to check all the parametres(argc is an amount of them)
			if (wcslen(argv[i]) > PARM_MAX_SIZE) {
				throw ERROR_THROW(104);
			}
			if (wcsstr(argv[i], PARM_IN)) {
				wcscpy(parm_to_return.in, argv[i]+wcslen(PARM_IN));
				store_in = parm_to_return.in;
				hasIn = true;
			}
			if (wcsstr(argv[i], PARM_OUT)) {
				wcscpy(parm_to_return.out, argv[i] + wcslen(PARM_OUT));
				hasOut = true;
			}
			if (wcsstr(argv[i], PARM_LOG)) {
				wcscpy(parm_to_return.log, argv[i] + wcslen(PARM_LOG));
				store_log = parm_to_return.log;
				hasLog = true;
			}
		}


		//if -in, -out or -log keys are not found
		if (!hasIn) {
			throw ERROR_THROW(100);
		}
		if (!hasOut) {
			wcscpy(parm_to_return.out, parm_to_return.in);
			wcscat(parm_to_return.out, PARM_OUT_DEFAULT_EXT);
		}
		if (!hasLog) {
			wcscpy(parm_to_return.log, parm_to_return.in);
			wcscat(parm_to_return.log, PARM_LOG_DEFAULT_EXT);
		}

		//fixing a bug when the simmilar log and in file name caused the rewriting of in file
		if (wcsstr(parm_to_return.in, parm_to_return.log)) {
			throw ERROR_THROW(114);
		}


		return parm_to_return;
	}
};
