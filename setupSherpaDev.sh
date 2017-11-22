CURRENT_DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"
NAME=${CURRENT_DIR}
export SHERPA_DEV=$NAME
echo '$SHERPA_DEV=' $SHERPA_DEV
#export TREX_HOME=$GOAC_DEV/agent
#echo '$TREX_HOME=' $TREX_HOME
#export TREX_LOG_DIR=$TREX_HOME/log
#echo  '$TREX_LOG_DIR=' $TREX_LOG_DIR
#export TREX_TEST_DIR=$TREX_HOME/test
#echo '$TREX_TEST_DIR=' $TREX_TEST_DIR
#export TREX_PATH=$TREX_HOME/cfg:$TREX_HOME/plugin
#echo '$TREX_PATH=' $TREX_PATH
export DEBUG=1

#export PLANNING_HOME=$GOAC_DEV/PlanningReactorUC3M
#echo '$PLANNING_HOME=' $PLANNING_HOME
#export DOMAIN=$GOAC_DEV/domain
#echo '$DOMAIN=' $DOMAIN
#export DATA=$GOAC_DEV/data
#echo '$DATA=' $DATA
#export TM_DIR=$DATA/tm
#export TC_DIR=$DATA/tc

export SHERPA_HOME=$SHERPA_DEV
echo '$SHERPA_HOME=' $SHERPA_HOME

#export PATH=$PATH:$TREX_HOME/bin

#export LD_LIBRARY_PATH=$TREX_HOME/lib:$TREX_HOME/plugin
export CCFLAGS=$CCFLAGS" -std=c++1y -frecord-gcc-switches -O0 -g3 -Wall -fmessage-length=0"


#alias gettm=$GOAC_DEV/admin/gettm.sh
#alias sendtc=$GOAC_DEV/admin/sendtc.sh
#alias cleartm=$GOAC_DEV/admin/cleartm.sh
#alias cleartc=$GOAC_DEV/admin/cleartc.sh
#alias clearobcp=$GOAC_DEV/admin/clearobcp.sh


alias amcTest=$TREX_HOME/admin/test.sh

echo ''
echo '*****************************************************************'
echo '***** The GOTCHA development environment is ready. ****************'
echo '*****************************************************************'
echo ''
