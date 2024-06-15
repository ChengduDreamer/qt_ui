echo "Status:"
git status

echo "Pull"
git pull

echo "Submodule init"
git submodule init .

echo "Submodule update"
git submodule foreach 'git checkout main'
git submodule foreach 'git pull'