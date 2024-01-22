import os

# Home directory of project
base_path = os.getcwd() 

output = [
    '# Project Directory Structure\n',
    '------\n'
]

def generate_directory_md(dir_path, prefix=""):
    for item in os.listdir(dir_path):
        item_path = os.path.join(dir_path, item)
        if os.path.isfile(item_path):
            relative_path = os.path.relpath(item_path, base_path)
            file_link = f'- [{item}]({relative_path})'
            output.append(f'{prefix}{file_link}\n')
        elif os.path.isdir(item_path):
            output.append(f'{prefix}- {item}\n')
            generate_directory_md(item_path, prefix + "  ")

generate_directory_md(base_path)

with open('README.md', 'w') as f:
    for line in output:
        f.write(line)
