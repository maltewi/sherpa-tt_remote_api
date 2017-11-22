#!/bin/bash

GREEN='\033[1;32m'
BLUE='\033[1;34m'
NC='\033[0m'

CURRENT_DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"
echo '$CURRENT_DIR=' $CURRENT_DIR
echo '$SHERPA_DEV=' $SHERPA_DEV

# If $SHERPA_DEV is not defined or is different to $CURRENT_DIR, 
# the environmental variables must be updated.
if [ -z $SHERPA_DEV ] || [ $SHERPA_DEV != $CURRENT_DIR ]
then
	echo -e " ${BLUE} Updating Enviromental Variables ${NC}"
	source ./setupSherpaDev.sh	
else
	echo -e " ${GREEN} Right definition of Enviromental Variables  ${NC}"
fi
